// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var Jest  = require("@glennsl/bs-jest/src/jest.js");
var Luxon = require("luxon");

Jest.test("to work", (function () {
        var now = Luxon.DateTime.local(undefined, undefined, undefined, undefined, undefined, undefined, undefined);
        return Jest.ExpectJs[/* toBe */2](new Date().getDate(), Jest.ExpectJs[/* expect */0](now.toJSDate().getDate()));
      }));

Jest.test("DateTime.local(2017) is the beginning of the year", (function () {
        var dt = Luxon.DateTime.local(2017, undefined, undefined, undefined, undefined, undefined, undefined);
        Jest.ExpectJs[/* toBe */2](2017, Jest.ExpectJs[/* expect */0](dt.year));
        Jest.ExpectJs[/* toBe */2](1, Jest.ExpectJs[/* expect */0](dt.month));
        Jest.ExpectJs[/* toBe */2](1, Jest.ExpectJs[/* expect */0](dt.day));
        Jest.ExpectJs[/* toBe */2](0, Jest.ExpectJs[/* expect */0](dt.hour));
        Jest.ExpectJs[/* toBe */2](0, Jest.ExpectJs[/* expect */0](dt.minute));
        Jest.ExpectJs[/* toBe */2](0, Jest.ExpectJs[/* expect */0](dt.second));
        return Jest.ExpectJs[/* toBe */2](0, Jest.ExpectJs[/* expect */0](dt.millisecond));
      }));

/*  Not a pure module */