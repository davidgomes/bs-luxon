module DateTime = {
    type t = {.
        /**** Methods ****/
        [@bs.meth] "toISODate": unit => string,
        [@bs.meth] "toJSDate": unit => Js_date.t,

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
    [@bs.module "luxon"] [@bs.scope "DateTime"] external local: (~year: int=?, ~month: int=?, ~day: int=?, ~hour: int=?, ~minute: int=?, ~second: int=?, ~millisecond: int=?, unit) => t = "";

    /* In the original API, these are all optional. But not in bs-luxon. */
    type objectDate = {.
        "year": int,
        "day": int,
        "month": int,
        "hour": int,
        "minute": int,
        "second": int,
        "millisecond": int
    };

    [@bs.module "luxon"] [@bs.scope "DateTime"] external fromObject : (objectDate) => t = "";

    /**** Static Members ****/
    [@bs.module "luxon"] [@bs.scope "DateTime"] external dateTimeFull : string = "DATETIME_FULL";
};