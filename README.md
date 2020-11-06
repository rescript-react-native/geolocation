# BuckleScript bindings to @react-native-community/geolocation

[![Build Status](https://github.com/reason-react-native/geolocation/workflows/Build/badge.svg)](https://github.com/reason-react-native/geolocation/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/geolocation.svg)](https://www.npmjs.com/package/@reason-react-native/geolocation)

These are complete BuckleScript bindings to
[`@reason-react-native/geolocation`](https://github.com/react-native-community/react-native-geolocation),
in Reason syntax.

Version `x.y.z` of `@reason-react-native/geolocation` should be compatible with
version `x.y.*` of `@react-native-community/geolocation`.

## Installation

With `yarn`:

```shell
yarn add @reason-react-native/geolocation
```

With `npm`:

```shell
npm install @reason-react-native/geolocation
```

`@react-native-community/geolocation` should be properly installed and linked.
Please refer to the relevant
[instructions](https://github.com/react-native-community/react-native-geolocation/blob/master/README.md).

`@reason-react-native/geolocation` should be added to `bs-dependencies` in your
`bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/geolocation"
  ],
  //...
}
```

## Note

On Android, this package uses the
[android.location API](https://developer.android.com/reference/android/location/package-summary),
which is slower and less accurate than the
[Google Location Services API](https://developer.android.com/training/location/).
While this may be addressed in the future, below alternatives already use the
latter API:

- [react-native-geolocation-service](https://github.com/Agontuk/react-native-geolocation-service)
- [react-native-location](https://github.com/timfpark/react-native-location)

## Use

Documentation is not available at this time.

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
