open Jest;

open ExpectJs;

let toDurationObject = (d: Duration.d) => {
  "years": d##years,
  "months": d##months,
  "weeks": d##weeks,
  "days": d##days,
  "hours": d##hours,
  "minutes": d##minutes,
  "seconds": d##seconds,
  "milliseconds": d##milliseconds
};

/*
 * .fromObject()
 */
test("Duration.fromObject sets all the values", () => {
  let d =
    Duration.from(
      ~years=1,
      ~months=2,
      ~days=3,
      ~hours=4,
      ~minutes=5,
      ~seconds=6,
      ~milliseconds=7,
      ()
    );
  expect(toDurationObject(d))
  |> toEqual({
       "years": 1,
       "weeks": 0,
       "months": 2,
       "days": 3,
       "hours": 4,
       "minutes": 5,
       "seconds": 6,
       "milliseconds": 7
     });
});