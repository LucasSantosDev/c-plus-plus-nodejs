const program = require("./build/Release/hello.node");

const result = program.sayHello("Lucas");

console.log("O programa respondeu: ", result);
