open Jest;
open ExpectJs;

open Luxon;

/*
 * .local()
 */

test(
    "to work",
    () => {
        let now = DateTime.local();

        expect(Js_date.getDate(now##toJSDate()))
        |> toBe(Js_date.getDate(Js_date.make()));
    }
);

test(
    "DateTime.local(2017) is the beginning of the year",
    () => {
        let dt = DateTime.local(~year=2017, ());

        expect(dt##year) |> toBe(2017) |> ignore;
        expect(dt##month) |> toBe(1) |> ignore;
        expect(dt##day) |> toBe(1) |> ignore;
        expect(dt##hour) |> toBe(0) |> ignore;
        expect(dt##minute) |> toBe(0) |> ignore;
        expect(dt##second) |> toBe(0) |> ignore;
        expect(dt##millisecond) |> toBe(0);
    }
);

/*test('DateTime.local(2017) is the beginning of the year', () => {
    const dt = DateTime.local(2017);
    expect(dt.year).toBe(2017);
    expect(dt.month).toBe(1);
    expect(dt.day).toBe(1);
    expect(dt.hour).toBe(0);
    expect(dt.minute).toBe(0);
    expect(dt.second).toBe(0);
    expect(dt.millisecond).toBe(0);
  });*/
  