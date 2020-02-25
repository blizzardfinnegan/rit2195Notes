// PARAMETERS
var startDate = new Date("2019-03-02T12:00:00");
//var startDate = new Date("2019-03-02T02:41:30"); // test; remove this.
//var startDate = new Date(Date.now() - 10000); // test; remove this.
var updateFrequency = 8; //seconds
var timeAugmentation = 1;
var slides = {
	// hours: image path in /slides
	default: {
		game: "current game",
		src: "blank.html",
		players: ["HoGS"]
	},
	00: {
		game: "Don\u2019t Starve Together",
		src: "slide00.html",
		players: ["Jamie", "Lemole"]
	},
	01: {
		game: "Assassin\u2019s Creed: Origins",
		src: "slide01.html",
		players: ["Sydney"]
	},
	02: {
		game: "The Stanley Parable",
		src: "slide02.html",
		players: ["Riley"]
	},
	03: {
		game: "Super Hexagon \u0026 VVVVVV",
		src: "slide03.html",
		players: ["Stephen"]
	},
	04: {
		game: "Atari games",
		src: "slide04.html",
		players: ["Kav"]
	},
	05: {
		game: "Super Mario Odyssey",
		src: "slide05.html",
		players: ["Alex"]
	},
	06: {
		game: "Jackbox Party Pack 1\u20134",
		src: "slide06.html",
		players: ["Brad", "others"]
	},
	07: {
		game: "Slay the Spire",
		src: "slide07.html",
		players: ["Will", "Hartzell"]
	},
	08: {
		game: "Super Meat Boy",
		src: "slide08.html",
		players: ["Remi"]
	},
	09: {
		game: "Portal 2",
		src: "slide09.html",
		players: ["Tess", "Hartzell"]
	},
	10: {
		game: "Amnesia: The Dark Descent",
		src: "slide10.html",
		players: ["Andrew"]
	},
	11: {
		game: "Super Smash Brothers Ultimate",
		src: "slide11.html",
		players: ["Cristian"]
	},
	12: {
		game: "Town of Salem",
		src: "slide12.html",
		players: ["everyone"]
	},
	13: {
		game: "DOOM",
		src: "slide13.html",
		players: ["MacDougall"]
	},
	14: {
		game: "Dream Daddy",
		src: "slide14.html",
		players: ["Jamie"]
	},
	15: {
		game: "Monster Prom",
		src: "slide15.html",
		players: ["Rea"]
	},
	16: {
		game: "Cuphead",
		src: "slide16.html",
		players: ["Jon", "Remi"]
	},
	17: {
		game: "I am Bread",
		src: "slide17.html",
		players: ["Jamie"]
	},
	18: {
		game: "Skyrim",
		src: "slide18.html",
		players: ["Sui"]
	},
	19: {
		game: "Sonic Adventure DX",
		src: "slide19.html",
		players: ["Sheldon"]
	},
	20: {
		game: "Bastion",
		src: "slide20.html",
		players: ["Sui"]
	},
	21: {
		game: "Shower With Your Dad Simulator",
		src: "slide21.html",
		players: ["T\u2011Board"]
	},
	22: {
		game: "Mario Kart",
		src: "slide22.html",
		players: ["Patch", "HoGS"]
	},
	23: {
		game: "Keep Talking and Nobody Explodes",
		src: "slide23.html",
		players: ["Sheldon", "Hartzell"]
	}
};

// END OF PARAMETERS
(function slideSwitcher() {
	var iframe = document.getElementById("insertedSlide");
	var flexibleTitle = document.getElementById("flexibleTitle");
	var gameNameSlot = flexibleTitle.querySelector(".game-name");
	
	for (entry of Object.entries(slides)) {
		let keyTemp = entry[0];
		if (keyTemp == (new Number(keyTemp)).toString()) {
			keyTemp = Number(keyTemp);
		}
		entry[1].key = keyTemp;
	}
		
	// This returns the hours since `startDate`. It will treat the optional parameter as the current time.
	var timeProgress = function(datetime = Date.now()) {
		if (typeof datetime !== "number") {
			if (datetime.getTime) {
				datetime = datetime.getTime();
			} else {
				datetime = new Date(datetime);
			}
		}
		return (datetime - startDate) / 1000 / 60 / 60 * timeAugmentation;
	}
	
	iframe.addEventListener("error", function() {
		updateElements(slides.default);
	}, {
		capture: false,
		once: false,
		passive: true
	});
	
	// This should only be called if data actually needs to be changed.
	var updateElements = function(data) {
		console.log("updating to:");
		console.dir(data);
		iframe.setAttribute("src", "slides/" + data.src);
		gameNameSlot.innerText = data.game;
	}
	
	var currentSlideID;
	var update = function() {
		let currentHour = Math.floor(timeProgress());
		if (currentSlideID != currentHour) {
			currentSlideID = currentHour;
			if (slides[currentHour]) {
				updateElements(slides[currentHour]);
			} else {
				updateElements(slides.default);
			}
		}
	}
	
	update();
	window.setInterval(function() {
		window.requestIdleCallback(update, {timeout: updateFrequency * 1000 / 3});
	}, updateFrequency * 1000);
})();
