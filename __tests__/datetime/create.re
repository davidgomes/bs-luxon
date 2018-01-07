open Jest;

open ExpectJs;

open Luxon;

let getDateObject = (dt: DateTime.t) => {
  "year": dt##year,
  "month": dt##month,
  "day": dt##day,
  "hour": dt##hour,
  "minute": dt##minute,
  "second": dt##second,
  "millisecond": dt##millisecond
};

/*
 * .local()
 */
test(
  "to work",
  () => {
    let now = DateTime.local();
    expect(Js_date.getDate(now |> DateTime.toJSDate())) |> toBe(Js_date.getDate(Js_date.make()))
  }
);

test(
  "DateTime.local(2017) is the beginning of the year",
  () => {
    let dt = DateTime.local(~year=2017, ());
    expect(getDateObject(dt))
    |> toEqual({
         "year": 2017,
         "month": 1,
         "day": 1,
         "hour": 0,
         "minute": 0,
         "second": 0,
         "millisecond": 0
       })
  }
);