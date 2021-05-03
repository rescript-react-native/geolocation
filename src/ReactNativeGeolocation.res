type coords = {
  speed: float,
  longitude: float,
  latitude: float,
  accuracy: float,
  heading: float,
}

type position = {
  coords: coords,
  timestamp: float,
}

type error = {
  code: int,
  message: string,
}

type config
@obj
external config: (
  ~skipPermissionRequests: bool=?,
  ~authorizationLevel: [#always | #auto | #whenInUse]=?,
  unit,
) => config = ""

@module("@react-native-community/geolocation")
external setRNConfiguration: config => unit = "setRNConfiguration"

@module("@react-native-community/geolocation")
external requestAuthorization: unit => unit = "requestAuthorization"

@module("@react-native-community/geolocation")
external stopObserving: unit => unit = "stopObserving"

type currentPositionOptions
@obj
external currentPositionOptions: (
  ~timeout: float=?,
  ~maximumAge: float=?,
  ~enableHighAccuracy: bool=?,
  unit,
) => currentPositionOptions = ""

@module("@react-native-community/geolocation")
external getCurrentPosition: (
  position => unit,
  ~onError: error => unit=?,
  ~options: currentPositionOptions=?,
  unit,
) => unit = "getCurrentPosition"

type watchId

type watchPositionOptions
@obj
external watchPositionOptions: (
  ~timeout: float=?,
  ~maximumAge: float=?,
  ~enableHighAccuracy: bool=?,
  ~distanceFilter: float=?,
  ~useSignificantChanges: bool=?,
  unit,
) => watchPositionOptions = ""

@module("@react-native-community/geolocation")
external watchPosition: (
  position => unit,
  ~onError: error => unit=?,
  ~options: watchPositionOptions=?,
  unit,
) => watchId = "watchPosition"

@module("@react-native-community/geolocation")
external clearWatch: watchId => unit = "clearWatch"
