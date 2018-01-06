open Luxon;

Js.log(DateTime.local(~year=2017, ~month=5, ~day=15, ~hour=8, ~minute=30));

let dateObj: DateTime.objectDate = {"year": 2017};
Js.log(DateTime.fromObject(dateObj)##toISODate());

Js.log(DateTime.fromObject(dateObj)##day);

Js.log(DateTime.dateTimeFull);