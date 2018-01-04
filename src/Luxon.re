module DateTime = {
    type t = {.
        /* Methods */
        [@bs.meth] "toISODate": unit => string,

        /* Members */
        "day": int
    };

    /* Static Methods */
    [@bs.module "luxon"] [@bs.scope "DateTime"] external local: (int, int, int, int, int, int, int) => t = "";

    type objectDate = {.
      "year": int,
    };
    
    [@bs.module "luxon"] [@bs.scope "DateTime"] external fromObject : (objectDate) => t = "";
    
    /* Static Members */

    [@bs.module "luxon"] [@bs.scope "DateTime"] external dateTimeFull : string = "DATETIME_FULL";
};