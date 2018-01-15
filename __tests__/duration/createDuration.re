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
/*test('Duration.fromObject sets all the values', () => {
    const dur = Duration.fromObject({
      years: 1,
      months: 2,
      days: 3,
      hours: 4,
      minutes: 5,
      seconds: 6,
      milliseconds: 7
    });
    expect(dur.years).toBe(1);
    expect(dur.months).toBe(2);
    expect(dur.days).toBe(3);
    expect(dur.hours).toBe(4);
    expect(dur.minutes).toBe(5);
    expect(dur.seconds).toBe(6);
    expect(dur.milliseconds).toBe(7);
  });*/
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