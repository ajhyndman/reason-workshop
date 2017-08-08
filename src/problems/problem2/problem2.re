let size = "50px";

let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    backgroundColor::"grey"
    display::"block"
    height::size
    width::size
    ();

let component = ReasonReact.statelessComponent "Problem2";

let make _children => {
  ...component,
  render: fun _self => {
    <div style />;
  }
};
