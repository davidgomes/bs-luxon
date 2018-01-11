open Jest;

open ExpectJs;

open Luxon;

/*
 * .minus()
 */
/*test('DateTime#minus({ years: 1 }) subtracts a year', () => {
  const dt = createDateTime().minus({ years: 1 });
  expect(dt.year).toBe(2009);
});

test('DateTime#minus maintains invalidity', () => {
  expect(DateTime.invalid('because').minus({ day: 1 }).isValid).toBe(false);
});*/

test(
  "DateTime#minus({ years: 1 }) subtracts a year",
  () => {
    let dt = DateTime.(
        local(~year=2017, ())
        |> minus(`DurationObj(makeDurationObj(~years=1, ())))
    );
    expect(dt##year) |> toEqual(2016);
  }
);

test(
  "DateTime#minus(7) subtracts 7 milliseconds",
  () => {
    let dt = DateTime.(
        local(~year=2017, ~millisecond=17, ())
        |> minus(`Int(7))
    );
    expect(dt##millisecond) |> toEqual(10);
  }
)