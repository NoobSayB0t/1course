let img1 = document.getElementById("image1")
let img2 = document.getElementById("image2")
let img3 = document.getElementById("image3")


img1.addEventListener("mouseover",function(){
    img1.style.display = "none"

    let someText = document.createElement("p")
    someText.style.fontSize = "32px"
    someText.innerText="На картинке предоставлено небольшое озеро"
    document.getElementById("fig1").append(someText)
})

img2.addEventListener("click", function(){
    img2.style.border = "10px solid red"
})

img3.addEventListener("mouseover", function(){
    img3.src = "/laba15/img/4.jpg"
})

img3.addEventListener("mouseout", function(){
    img3.src = "/laba15/img/3.jpg"
})
