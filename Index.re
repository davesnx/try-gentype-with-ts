[@genType]
let set = [|1, 2, 3|]->JsSet.fromArray;

[@genType]
let regex = [%re {|/[a-zA-Z_][a-zA-Z0-9_]*/|}];
