type d = {
  . /* Duration type */
  /**** Members ****/
  "days": int,
  "hours": int,
  "milliseconds": int,
  "minutes": int,
  "months": int,
  "seconds": int,
  "weeks": int,
  "years": int,
  "locale": string,
};

type durationObj = {
  .
  "days": int,
  "hours": int,
  "milliseconds": int,
  "minutes": int,
  "months": int,
  "seconds": int,
  "weeks": int,
  "years": int,
  "locale": string,
};

[@mel.module "luxon"] [@mel.scope "Duration"]
external fromObject: durationObj => d;

[@mel.obj]
external makeDurationObj:
  (
    ~years: int=?,
    ~months: int=?,
    ~weeks: int=?,
    ~days: int=?,
    ~hours: int=?,
    ~minutes: int=?,
    ~seconds: int=?,
    ~milliseconds: int=?,
    unit
  ) =>
  durationObj;

let from =
    (
      ~days=?,
      ~hours=?,
      ~milliseconds=?,
      ~minutes=?,
      ~months=?,
      ~seconds=?,
      ~weeks=?,
      ~years=?,
      (),
    ) =>
  fromObject(
    makeDurationObj(
      ~days?,
      ~hours?,
      ~milliseconds?,
      ~minutes?,
      ~months?,
      ~seconds?,
      ~weeks?,
      ~years?,
      (),
    ),
  );
