module Problem1 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem1";
  let render _ =>
    <div>
      /* use the ReactRe.stringToElement function here to make this component render "ReasonML"  */
      /* reason ships with JSX support, similar to React's */
      (ReactRe.stringToElement "ReasonML")
    </div>;
};

include ReactRe.CreateComponent Problem1;

let createElement = wrapProps ();
