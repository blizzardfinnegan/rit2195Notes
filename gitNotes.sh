function gitNotes() {
	git add .
	git commit -m "$@"
	git push
}
