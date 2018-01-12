open Jest;

open ExpectJs;

open Luxon;

test(
  "DateTime#minus({ years: 1 }) subtracts a year",
  () => {
    let dt =
      DateTime.(
        local(~year=2017, ())
        |> minus(`DurationObj(makeDurationObj(~years=1, ())))
      );
    expect(dt##year) |> toEqual(2016)
  }
);

test(
  "DateTime#plus({ years: 1 }) adds a year",
  () => {
    let dt =
      DateTime.(
        local(~year=2017, ())
        |> plus(`DurationObj(makeDurationObj(~years=1, ())))
      );
    expect(dt##year) |> toEqual(2018)
  }
);

test(
  "DateTime#minus(7) subtracts 7 milliseconds",
  () => {
    let dt =
      DateTime.(local(~year=2017, ~millisecond=17, ()) |> minus(`Int(7)));
    expect(dt##millisecond) |> toEqual(10)
  }
);
