type coords = {
  speed: float,
  longitude: float,
  latitude: float,
  accuracy: float,
  heading: float,
};

type position = {
  coords,
  timestamp: float,
};

type error = {
  code: int,
  message: string,
};

type config;
[@bs.obj]
external config:
  (
    ~skipPermissionRequests: bool=?,
    ~authorizationLevel: [ | `always | `auto | `whenInUse]=?,
    unit
  ) =>
  config;

[@bs.module "@react-native-community/geolocation"]
external setRNConfiguration: config => unit = "setRNConfiguration";

[@bs.module "@react-native-community/geolocation"]
external requestAuthorization: unit => unit = "requestAuthorization";

[@bs.module "@react-native-community/geolocation"]
external stopObserving: unit => unit = "stopObserving";

type currentPositionOptions;
[@bs.obj]
external currentPositionOptions:
  (
    ~timeout: float=?,
    ~maximumAge: float=?,
    ~enableHighAccuracy: bool=?,
    unit
  ) =>
  currentPositionOptions;

[@bs.module "@react-native-community/geolocation"]
external getCurrentPosition:
  (
    position => unit,
    ~onError: error => unit=?,
    ~options: currentPositionOptions=?,
    unit
  ) =>
  unit =
  "getCurrentPosition";

type watchId;

type watchPositionOptions;
[@bs.obj]
external watchPositionOptions:
  (
    ~timeout: float=?,
    ~maximumAge: float=?,
    ~enableHighAccuracy: bool=?,
    ~distanceFilter: float=?,
    ~useSignificantChanges: bool=?,
    unit
  ) =>
  watchPositionOptions;

[@bs.module "@react-native-community/geolocation"]
external watchPosition:
  (
    position => unit,
    ~onError: error => unit=?,
    ~options: watchPositionOptions=?,
    unit
  ) =>
  watchId =
  "watchPosition";

[@bs.module "@react-native-community/geolocation"]
external clearWatch: watchId => unit = "clearWatch";
