open Tablecloth;

let fn = () =>
  String.toList("tAbLeCLoTh")
  |> List.map(~f=Char.toCode)
  |> List.map(~f=x => x + 1)
  |> List.filterMap(~f=Char.fromCode)
  |> String.fromList
