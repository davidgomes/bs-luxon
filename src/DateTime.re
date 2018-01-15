type dt = {
  . /* DateTime type */
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
  dt =
  "";


/*** Methods ****/
[@bs.send.pipe : dt] external setZone : string => dt = "";

[@bs.send.pipe : dt] external toISODate : unit => string = "";

[@bs.send.pipe : dt] external toFormat : string => string = "";

[@bs.send.pipe : dt] external toISO : unit => string = "";

[@bs.send.pipe : dt] external toJSDate : unit => Js_date.t = "";

[@bs.send.pipe : dt] external valueOf : unit => float = "";

type arithmeticArgs = [
  | `DurationObj(Duration.durationObj)
  | `Int(int)
  | `Duration(Duration.d)
];

[@bs.send.pipe : dt]
external minus :
  (
  [@bs.unwrap]
  [ | `DurationObj(Duration.durationObj) | `Int(int) | `Duration(Duration.d)]
  ) =>
  dt =
  "";

[@bs.send.pipe : dt]
external plus :
  (
  [@bs.unwrap]
  [ | `DurationObj(Duration.durationObj) | `Int(int) | `Duration(Duration.d)]
  ) =>
  dt =
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
external fromObject : objectDate => dt = "";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromMillis : float => dt = "";

[@bs.send.pipe : dt]
external endOf :
  (
  [@bs.string]
  [ | `year | `month | `week | `day | `hour | `minute | `second | `millisecond]
  ) =>
  dt =
  "";

[@bs.send.pipe : dt]
external startOf :
  (
  [@bs.string]
  [ | `year | `month | `week | `day | `hour | `minute | `second | `millisecond]
  ) =>
  dt =
  "";


/**** Static Members ****/
[@bs.module "luxon"] [@bs.scope "DateTime"]
external dateTimeFull : string = "DATETIME_FULL";