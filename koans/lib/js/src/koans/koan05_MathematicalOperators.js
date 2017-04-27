// Generated by BUCKLESCRIPT VERSION 1.7.1, PLEASE EDIT WITH CARE
'use strict';

var Mocha      = require("mocha");
var Assert     = require("assert");
var Helpers    = require("../helpers.js");
var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");
var Pervasives = require("bs-platform/lib/js/pervasives.js");

function koans() {
  Mocha.describe("Mathematical Operators", function () {
        Mocha.it("abs gives the absolute value of a number", function () {
              Assert.equal(3, Pervasives.abs(Helpers.__(/* () */0)));
              return /* () */0;
            });
        Mocha.it("sqrt gives the square root of a Float", function () {
              Assert.equal(3.0, Math.sqrt(Helpers.__(/* () */0)));
              return /* () */0;
            });
        Mocha.it("+ adds numbers", function () {
              Assert.equal(3, 1 + Helpers.__(/* () */0) | 0);
              return /* () */0;
            });
        Mocha.it("- subtracts numbers", function () {
              Assert.equal(3, 7 - Helpers.__(/* () */0) | 0);
              return /* () */0;
            });
        Mocha.it("* multiplies numbers", function () {
              Assert.equal(6, (Helpers.__(/* () */0) << 2));
              return /* () */0;
            });
        Mocha.it("/. divides Floats", function () {
              Assert.equal(2.5, 5.0 / Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("/ divides Ints", function () {
              Assert.equal(2, Caml_int32.div(5, Helpers.__(/* () */0)));
              return /* () */0;
            });
        Mocha.it("mod performs modular arithmetic (which is different)", function () {
              Assert.equal(-1, Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("log returns the natural log of the value", function () {
              Assert.equal(Math.log(2.0), Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("log10 returns the base10 log of the value", function () {
              Assert.equal(Math.log10(2.0), Helpers.__(/* () */0));
              return /* () */0;
            });
        return /* () */0;
      });
  return /* () */0;
}

exports.koans = koans;
/* mocha Not a pure module */
