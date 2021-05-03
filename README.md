# `@rescript-react-native/geolocation`

[![Build Status](https://github.com/rescript-react-native/geolocation/workflows/Build/badge.svg)](https://github.com/rescript-react-native/geolocation/actions)
[![Version](https://img.shields.io/npm/v/@rescript-react-native/geolocation.svg)](https://www.npmjs.com/@rescript-react-native/geolocation)
[![ReScript Forum](https://img.shields.io/discourse/posts?color=e6484f&label=ReScript%20Forum&server=https%3A%2F%2Fforum.rescript-lang.org)](https://forum.rescript-lang.org/)

[ReScript](https://rescript-lang.org) bindings for
[`@react-native-community/geolocation`](https://github.com/react-native-geolocation/react-native-geolocation).

Exposed as `ReactNativeGeolocation` module.

`@rescript-react-native/geolocation` X.y.\* means it's compatible with
`@react-native-community/geolocation` X.y.\*

## Installation

When
[`@react-native-community/geolocation`](https://github.com/react-native-geolocation/react-native-geolocation)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @rescript-react-native/geolocation
# or
yarn add @rescript-react-native/geolocation
```

`@rescript-react-native/geolocation` should be added to `bs-dependencies` in your
`bsconfig.json`:

```diff
{
  //...
  "bs-dependencies": [
    "@rescript/react",
    "rescript-react-native",
    // ...
+    "@rescript-react-native/geolocation"
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
[contribution guidelines](https://github.com/rescript-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/rescript-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
