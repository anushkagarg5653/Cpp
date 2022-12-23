// callback in js

setTimeout(function (){
    console.log("timer");
},5000);

function x(y){
    console.log("y");
    y();
}

x(function y(){
    console.log("y");
});