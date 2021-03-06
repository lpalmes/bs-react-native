type t;

type emitterSubscription;

external create : NativeModulesRe.t 'a => t =
  "NativeEventEmitter" [@@bs.new] [@@bs.module "react-native"];

external addListener : t => string => ('a => unit) => emitterSubscription = "" [@@bs.send];

external removeAllListeners : t => string => unit = "" [@@bs.send];

external removeSubscription : t => emitterSubscription => unit = "" [@@bs.send];

module Subscription = {
  external remove : emitterSubscription => unit => unit = "" [@@bs.send];
};

