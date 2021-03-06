/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "ADBannerViewDelegate.h"

#import "ADInterstitialAdDelegate.h"

#import "_UIViewControllerContentViewEmbedding.h"



@class ADBannerView, ADInterstitialAd, NSString, NSURL, UIViewController;



@interface _ADUIViewControllerAdController : NSObject <_UIViewControllerContentViewEmbedding, ADBannerViewDelegate, ADInterstitialAdDelegate>

{

    UIViewController *_contentViewController;

    _Bool _canDisplayBannerAds;

    _Bool _canOwnSharedBanner;

    _Bool _presentingFullScreenAd;

    NSURL *_bannerServerURL;

    NSString *_bannerAdSection;

    NSString *_bannerAuthUserName;

    NSURL *_interstitialServerURL;

    NSString *_interstitialAdSection;

    NSString *_interstitialAuthUserName;

    long long _interstitialPresentationPolicy;

    ADBannerView *_bannerView;

    ADInterstitialAd *_interstitialAd;

}



+ (id)_sharedBannerView;

+ (void)prepareInterstitialAds;

- (void)_considerTakingBannerView;

- (void)_hideBannerView;

- (void)_layoutContentAndBannerViewAnimated:(_Bool)arg1;

- (_Bool)_presentInterstitialIfReady;

@property(copy, nonatomic) NSString *bannerAdSection; // @synthesize bannerAdSection=_bannerAdSection;

@property(copy, nonatomic) NSString *bannerAuthUserName; // @synthesize bannerAuthUserName=_bannerAuthUserName;

@property(copy, nonatomic) NSURL *bannerServerURL; // @synthesize bannerServerURL=_bannerServerURL;

@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;

- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;

- (void)bannerViewActionDidFinish:(id)arg1;

- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;

- (void)bannerViewDidLoadAd:(id)arg1;

@property(nonatomic) _Bool canDisplayBannerAds; // @synthesize canDisplayBannerAds=_canDisplayBannerAds;

@property(nonatomic) _Bool canOwnSharedBanner; // @synthesize canOwnSharedBanner=_canOwnSharedBanner;

@property(readonly, nonatomic) UIViewController *contentViewController;

- (void)dealloc;

- (id)initWithContentViewController:(id)arg1;

@property(retain, nonatomic) ADInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;

- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;

- (void)interstitialAdActionDidFinish:(id)arg1;

- (void)interstitialAdDidUnload:(id)arg1;

@property(copy, nonatomic) NSString *interstitialAdSection; // @synthesize interstitialAdSection=_interstitialAdSection;

@property(copy, nonatomic) NSString *interstitialAuthUserName; // @synthesize interstitialAuthUserName=_interstitialAuthUserName;

@property(nonatomic) long long interstitialPresentationPolicy; // @synthesize interstitialPresentationPolicy=_interstitialPresentationPolicy;

@property(copy, nonatomic) NSURL *interstitialServerURL; // @synthesize interstitialServerURL=_interstitialServerURL;

@property(readonly, nonatomic, getter=isDisplayingBannerAd) _Bool displayingBannerAd;

@property(nonatomic, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd; // @synthesize presentingFullScreenAd=_presentingFullScreenAd;

- (_Bool)requestInterstitialAdPresentation;

- (void)viewController:(id)arg1 viewDidAppear:(_Bool)arg2;

- (void)viewController:(id)arg1 viewDidDisappear:(_Bool)arg2;

- (void)viewController:(id)arg1 viewWillAppear:(_Bool)arg2;

- (void)viewController:(id)arg1 viewWillDisappear:(_Bool)arg2;

- (void)viewControllerViewDidLayoutSubviews:(id)arg1;

- (void)viewControllerViewWillLayoutSubviews:(id)arg1;



@end


