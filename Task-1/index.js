document.querySelector(".navbar__dropdown-container").children[0].addEventListener("click", () => {
	document.querySelector(".navbar__dropdown-content").classList.toggle("hidden");
});

document.querySelector(".hamburger-btn").addEventListener("click", () => {
	document.querySelector(".navbar__menu").classList.toggle("hidden");
});
