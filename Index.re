[@genType]
let set = JsSet.fromArray([|1, 2, 3|]);

[@genType "2set"]
let set2 = JsSet.fromArray([|1, 2, 3|]);

[@genType]
let regex = [%re {|/[a-zA-Z_][a-zA-Z0-9_]*/|}];

