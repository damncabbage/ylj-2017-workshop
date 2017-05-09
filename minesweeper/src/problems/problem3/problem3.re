let boxStyle = ReactDOMRe.Style.make width::"50px" height::"50px" border::"1px black solid" ();

module Problem3 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem3";
  let render {handler} => {
    let handleClick _ _ =>
      Js.log("clicked");
      /* change this function to log "clicked" to the JS console */
    let handleHover _ evt =>
      /* change this function to log "hover began" when the event is a mouseover event  and "hover ended" when the event is a mouseleave event */
      switch (ReactEventRe.Mouse._type evt) {
      | "mouseenter" => Js.log("hover began")
      | "mouseleave" => Js.log("hover ended")
      | _ => ()
      };
    <div
      style=boxStyle
      onClick=(handler handleClick)
      onMouseEnter=(handler handleHover)
      onMouseLeave=(handler handleHover)
    />
  };
};

include ReactRe.CreateComponent Problem3;

let createElement = wrapProps ();
