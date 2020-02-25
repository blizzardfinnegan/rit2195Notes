var gitHubEndpoint = new URL("https://API.GitHub.com");
var repositoryOwner = "rmw4269";
var repositoryName = "Extra-Life-test";
var gitHubAPIToken = "8f4290c0460ab62f91cdc350882859b511eb31ee";

function JSONString(object) {
	return JSON.stringify(object, null, "\u0009");
}

function gitFetchContents(pathToFile) {
	return window.fetch(`${gitHubEndpoint.toString()}repos/${repositoryOwner}/${repositoryName}/contents/${pathToFile}`, {
		method: "GET",
		headers: new Headers({
			"Accept": "application/vnd.github.v3+json",
			"Authorization": `token ${gitHubAPIToken}`
		}),
		cache: "default"
	});
}

let startButton0 = document.getElementById("startButton0");
let startButton1 = document.getElementById("startButton1");
let responseDisplay = document.getElementById("response");
let responseContentDisplay = document.getElementById("responseContent");

function getWithFetchRequest() {
	gitFetchContents("slideInfo.json")
	.then(function(response) {
		if (!response.ok) {
			let error = Error(response.statusText);
			error.response = response;
			throw error;
		} else {
			console.dir(response);
		}
	})
	.then(r => r.json())
	.then(function(response) {
		responseDisplay.innerText = JSONString(responseDisplay);
		let fileContents = JSON.parse(window.atob(responseDisplay.content));
		responseContentDisplay.innerText = JSONString(fileContents);
		console.dir(fileContents);
	})
	.catch(function(error) {
		if (error.response) {
			console.error(error + "\n" + error.response);
		} else {
			console.error(error);
		}
	});
};

function getWithHTTPRequest() {
	let request = new XMLHttpRequest();
	request.addEventListener("load", function() {
		let requestResponse = request.response;
		console.dir(requestResponse);
		responseDisplay.innerText = JSON.stringify(requestResponse, null, "\u0009");
		if (requestResponse.type = "file" && requestResponse.content) {
			responseContentDisplay.innerText = window.atob(requestResponse.content);
			console.log(JSON.parse(window.atob(requestResponse.content)));
		}
	}, {
		capture: false,
		once: true,
		passive: true
	});
	
	request.open("GET", `${gitHubEndpoint}/repos/${repositoryOwner}/${repositoryName}/contents/slideInfo.json`, true);
	request.responseType = "json";
	request.setRequestHeader("Accept", "application/vnd.github.v3+json");
	request.setRequestHeader("Authorization", "token 8f4290c0460ab62f91cdc350882859b511eb31ee");
	request.send();
};

startButton0.addEventListener("click", function() {
	startButton0.disabled = true;
	startButton1.disabled = true;
	getWithHTTPRequest();
}, {
	capture: false,
	once: true,
	passive: true
});

startButton1.addEventListener("click", function() {
	startButton0.disabled = true;
	startButton1.disabled = true;
	getWithFetchRequest();
}, {
	capture: false,
	once: true,
	passive: true
});
