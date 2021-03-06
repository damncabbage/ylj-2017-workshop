open Helpers;

let koans _ =>
  Mocha.describe "Number Conversions" @@ (
    fun _ => {
      Mocha.it "float converts an int to a float" @@ (fun _ => __ () |> Mocha.eq (float 5));
      Mocha.it "floor rounds a float down" @@ (fun _ => __ () |> Mocha.eq (floor 3.6));
      Mocha.it "floor rounds a negative float down" @@ (fun _ => __ () |> Mocha.eq (floor (-3.6)));
      Mocha.it "ceiling rounds a float up" @@ (fun _ => __ () |> Mocha.eq (ceil 3.6));
      Mocha.it "ceiling rounds a negative float up" @@ (fun _ => __ () |> Mocha.eq (ceil (-3.6)));
      Mocha.it "truncate converts a float to an int (rounding towards 0)" @@ (
        fun _ => __ () |> Mocha.eq (truncate 3.6)
      );
      Mocha.it "truncate converts a float to an int (rounding towards 0)" @@ (
        fun _ => __ () |> Mocha.eq (truncate (-3.6))
      )
    }
  );
