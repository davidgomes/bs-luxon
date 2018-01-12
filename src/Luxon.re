module DateTime = {
  type t = {
    .
    /**** Members ****/
    "year": int,
    "day": int,
    "month": int,
    "hour": int,
    "minute": int,
    "second": int,
    "millisecond": int
  };

  /**** Static Methods ****/
  [@bs.module "luxon"] [@bs.scope "DateTime"]
  external local :
    (
      ~year: int=?,
      ~month: int=?,
      ~day: int=?,
      ~hour: int=?,
      ~minute: int=?,
      ~second: int=?,
      ~millisecond: int=?,
      unit
    ) =>
    t =
    "";

  /*** Methods ****/
  [@bs.send.pipe : t] external setZone : string => t = "";
  [@bs.send.pipe : t] external toISODate : unit => string = "";
  [@bs.send.pipe : t] external toISO : unit => string = "";
  [@bs.send.pipe : t] external toJSDate : unit => Js_date.t = "";
  [@bs.send.pipe : t] external valueOf : unit => float = "";
  type durationObj;
  [@bs.obj]
  external makeDurationObj :
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
    durationObj =
    "";
  [@bs.send.pipe : t]
  external minus :
    ([@bs.unwrap] [ | `DurationObj(durationObj) | `Int(int)]) => t =
    "";
  [@bs.send.pipe : t]
  external plus :
    ([@bs.unwrap] [ | `DurationObj(durationObj) | `Int(int)]) => t =
    "";
  /* In the original API, these are all optional. But not in bs-luxon. In fact, in bs-luxon you should never use `fromObject` and always use `local` instead. */
  type objectDate = {
    .
    "year": int,
    "day": int,
    "month": int,
    "hour": int,
    "minute": int,
    "second": int,
    "millisecond": int
  };
  [@bs.module "luxon"] [@bs.scope "DateTime"]
  external fromObject : objectDate => t =
    "";
  [@bs.module "luxon"] [@bs.scope "DateTime"]
  external fromMillis : float => t =
    "";
  [@bs.send.pipe : t]
  external endOf :
    (
    [@bs.string]
    [
      | `year
      | `month
      | `week
      | `day
      | `hour
      | `minute
      | `second
      | `millisecond
    ]
    ) =>
    t =
    "";
  [@bs.send.pipe : t]
  external startOf :
    (
    [@bs.string]
    [
      | `year
      | `month
      | `week
      | `day
      | `hour
      | `minute
      | `second
      | `millisecond
    ]
    ) =>
    t =
    "";

  /**** Static Members ****/
  [@bs.module "luxon"] [@bs.scope "DateTime"] external dateTimeFull : string =
    "DATETIME_FULL";
};
