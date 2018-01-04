open Luxon;

Js.log(DateTime.local(2017, 5, 15, 8, 30, 0, 0));

let dateObj: DateTime.objectDate = {"year": 2017};
Js.log(DateTime.fromObject(dateObj)##toISODate());

Js.log(DateTime.fromObject(dateObj)##day);

Js.log(DateTime.dateTimeFull);