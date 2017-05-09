/*
* when the square is clicked, the background is permenantly green
* when the square is hovered, the background is blue
*/
let normalStyle = ReactDOMRe.Style.make background::"none" ();

let clickedStyle = ReactDOMRe.Style.make backgroundColor::"green" ();

let hoveredStyle = ReactDOMRe.Style.make backgroundColor::"blue" ();

let boxStyle = ReactDOMRe.Style.make width::"50px" height::"50px" border::"1px black solid" ();

module Problem4 = {
  include ReactRe.Component.Stateful;
  type props = unit;
  let name = "Problem4";
  type state = {
    clicked: bool,
    hovered: bool,
  };

  let getInitialState (_: props) => {hovered: false, clicked: false};
  let handleClick {state} _ =>
    /* change this function to return the existing state
       with the clicked prop set to true. you can use the object spread operator
       { ...state, foo: bar } */
    Some {...state, clicked: true};
  let handleHover {state} evt =>
    /* change this function to return the existing state
       with the hovered prop set to true. you can use the object spread operator
       { ...state, foo: bar } */
    switch (ReactEventRe.Mouse._type evt) {
    | "mouseenter" => Some {...state, hovered: true};
    | "mouseleave" => Some {...state, hovered: false};
    | _ => None;
    };
  let switchStyle (state: state) =>
    switch (state.clicked, state.hovered) {
    | (true, false) => clickedStyle
    | (true, true) => hoveredStyle
    | (false, true) => hoveredStyle
    | (false, false) => normalStyle
    };
    /* add the cases so that:
       clicked: true hovered: false => clicked style
       clicked: true hovered: true => hovered style
       clicked: false hovered: true => hovered style
       clicked: false hovered: false => empty style
    */
  let render {state, updater} => {
    let style = switchStyle state;
    <div
      style=(ReactDOMRe.Style.combine boxStyle style)
      onClick=(updater handleClick)
      onMouseEnter=(updater handleHover)
      onMouseLeave=(updater handleHover)
    />
  };
};

include ReactRe.CreateComponent Problem4;

let createElement = wrapProps ();
