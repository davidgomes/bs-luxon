type dt = {
  . /* DateTime type */
  /**** Members ****/
  "year": int,
  "day": int,
  "month": int,
  "hour": int,
  "minute": int,
  "second": int,
  "millisecond": int,
  "isValid": bool,
};

/**** Static Methods ****/
[@mel.module "luxon"] [@mel.scope "DateTime"]
external local:
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
  dt;

[@mel.module "luxon"] [@mel.scope "DateTime"]
external utc:
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
  dt;

/*** Methods ****/
[@mel.send.pipe: dt] external setZone: string => dt;

[@mel.send.pipe: dt] external toISODate: unit => string;

[@mel.send.pipe: dt] external toFormat: string => string;

[@mel.send.pipe: dt] external toISO: unit => string;

[@mel.send.pipe: dt] external toRelative: unit => string;

[@mel.send.pipe: dt] external toJSDate: unit => Js.Date.t;

[@mel.send.pipe: dt] external valueOf: unit => float;

type arithmeticArgs = [
  | `DurationObj(Duration.durationObj)
  | `Int(int)
  | `Duration(Duration.d)
];

[@mel.send.pipe: dt]
external minus:
  (
  [@mel.unwrap]
  [
    | `DurationObj(Duration.durationObj)
    | `Int(int)
    | `Duration(Duration.d)
  ]
  ) =>
  dt;

[@mel.send.pipe: dt]
external plus:
  (
  [@mel.unwrap]
  [
    | `DurationObj(Duration.durationObj)
    | `Int(int)
    | `Duration(Duration.d)
  ]
  ) =>
  dt;

/* In the original API, these are all optional. But not in bs-luxon. In fact, in bs-luxon you should never use `fromObject` and always use `local` instead. */
type objectDate = {
  .
  "year": int,
  "day": int,
  "month": int,
  "hour": int,
  "minute": int,
  "second": int,
  "millisecond": int,
};

[@mel.module "luxon"] [@mel.scope "DateTime"]
external fromObject: objectDate => dt;

[@mel.module "luxon"] [@mel.scope "DateTime"] external fromMillis: float => dt;

[@mel.module "luxon"] [@mel.scope "DateTime"]
external fromSeconds: float => dt;

[@mel.module "luxon"] [@mel.scope "DateTime"] external fromISO: string => dt;

[@mel.send.pipe: dt]
external endOf:
  (
  [ | `year | `month | `week | `day | `hour | `minute | `second | `millisecond]
  ) =>
  dt;

[@mel.send.pipe: dt]
external startOf:
  (
  [ | `year | `month | `week | `day | `hour | `minute | `second | `millisecond]
  ) =>
  dt;

/**** Static Members ****/
[@mel.module "luxon"] [@mel.scope "DateTime"]
external dateTimeFull: string = "DATETIME_FULL";
