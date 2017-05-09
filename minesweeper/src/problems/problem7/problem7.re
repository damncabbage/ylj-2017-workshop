type shape =
  | Square
  | Circle;

module Shape = {
  module type Shapeable = {let style: ReactDOMRe.Style.t;};
  module type Shape = {let render: string => ReactRe.reactElement;};
  module Make (S: Shapeable) :Shape => {
    include S;
    let render x =>
      <div>
        <div style=S.style />
        <span>(ReactRe.stringToElement x)</span>
      </div>;
  };
};


module Square =
  Shape.Make {
    let style = ReactDOMRe.Style.make width::"30px" height::"30px" backgroundColor::"blue" ();
  };

module Circle =
  Shape.Make {
    let style = ReactDOMRe.Style.make borderRadius::"15px" width::"30px" height::"30px" backgroundColor::"red" ();
  };

/*
use the Shape.Make functor to create two new modules:
  Square
  Circle
and replace the switch statement in Problem7 to render the correct shapes.
 */

module Problem7 = {
  include ReactRe.Component.Stateful;
  type state = {shape};
  type props = unit;
  let name = "Problem7";
  let getInitialState _ :state => {shape: Circle};
  let render {state, updater} => {
    let handleClick shape _ _ => Some {shape: shape};
    <div>
      <div>
        <button onClick=(updater @@ handleClick Circle)>
          (ReactRe.stringToElement "show circle")
        </button>
        <button onClick=(updater @@ handleClick Square)>
          (ReactRe.stringToElement "show square")
        </button>
      </div>
      (
        switch state.shape {
        | Circle => (Circle.render "circle")
        | Square => (Square.render "square")
        }
      )
    </div>
  };
};

include ReactRe.CreateComponent Problem7;

let createElement = wrapProps ();
