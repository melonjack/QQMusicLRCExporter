//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TADLandingViewControllerDelegate <NSObject>

@optional
- (void)adLandingViewMindLinkClicked:(int)arg1;
- (void)closeADLandingViewController:(BOOL)arg1;
- (void)closeADLandingViewController;
- (void)adLandingViewRefreshUrl:(NSString *)arg1;
- (void)adLandingViewDidFinishLoadingUrl:(NSString *)arg1;
- (void)adLandingViewStartLoadingUrl:(NSString *)arg1;
- (void)adLandingViewDidFailLoad;
- (void)adLandingViewDidFinishLoad;
- (void)adLandingViewDidStartLoad;
- (void)adLandingViewDidDismiss;
- (void)adLandingViewDidDisappear;
- (void)adLandingViewWillDisappear;
- (void)adLandingViewWillDismiss;
- (void)adLandingViewDidAppear;
- (void)adLandingViewWillAppear;
@end
