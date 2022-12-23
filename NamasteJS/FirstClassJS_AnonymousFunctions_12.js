// function statement aka function declaration
function a() {
    console.log("a is called");
}

//we can return an anonymus function from within a function
// function expression
var b = function(param1){
    return function(){

    }
}
var b = function(param1){
    console.log(param1);
}
function xyz() {

}
b(xyz);

// FIRST CLASS FUNCTION : the ability of funtions to use function as values.
// can be passed as arguments
// can be returned from a functions
//  also known as FIRST CLASS CITIZENS

