/*
 * .local()
 */

 /*
test("DateTime.local() has today's date", () => {
  const now = DateTime.local();
  expect(now.toJSDate().getDate()).toBe(new Date().getDate());
});

*/

open Jest;
open ExpectJs;
open Luxon;

test(
    "to work",
    () => {
        let now = DateTime.local();

        expect(Js_date.getDate(now##toJSDate()))
        |> toEqual(Js_date.getDate(Js_date.make()));
    }
);
