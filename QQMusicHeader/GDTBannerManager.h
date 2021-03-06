//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTBannerProtocolCallback.h"
#import "GDTBannerViewDataSource.h"
#import "GDTBannerViewDelegate.h"
#import "GDTClickCallback.h"
#import "ImageManagerDelegate.h"
#import "ProtocolHostDelegate.h"

@class GDTBannerProtocol, GDTBannerView, NSDate, NSMutableArray, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface GDTBannerManager : NSObject <GDTBannerViewDataSource, GDTBannerViewDelegate, GDTBannerProtocolCallback, GDTClickCallback, ProtocolHostDelegate, ImageManagerDelegate>
{
    BOOL leaved;
    BOOL _didRequestBanner;
    BOOL _bannerIsShown;
    NSString *_appkey;
    NSString *_posId;
    int _adCount;
    int _adtype;
    unsigned int _type;
    UIViewController *_hostVC;
    NSMutableArray *_bannerItems;
    NSMutableArray *_observers;
    GDTBannerProtocol *_bannerProtocol;
    GDTBannerView *_bannerView;
    NSDate *_leaveTime;
    NSDate *_entranceTime;
}

@property(retain, nonatomic) NSDate *entranceTime; // @synthesize entranceTime=_entranceTime;
@property(retain, nonatomic) NSDate *leaveTime; // @synthesize leaveTime=_leaveTime;
@property(retain, nonatomic) GDTBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) GDTBannerProtocol *bannerProtocol; // @synthesize bannerProtocol=_bannerProtocol;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *bannerItems; // @synthesize bannerItems=_bannerItems;
@property(nonatomic) BOOL bannerIsShown; // @synthesize bannerIsShown=_bannerIsShown;
@property(nonatomic) BOOL didRequestBanner; // @synthesize didRequestBanner=_didRequestBanner;
@property(nonatomic) __weak UIViewController *hostVC; // @synthesize hostVC=_hostVC;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) int adtype; // @synthesize adtype=_adtype;
@property(nonatomic) int adCount; // @synthesize adCount=_adCount;
@property(retain, nonatomic) NSString *posId; // @synthesize posId=_posId;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (void)cleanCachedData;
- (BOOL)bannerDataIsAvailable;
- (void)filterValidBanners;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)loadBannerImages;
- (void)loadGDTBannerFailed:(int)arg1 posId:(id)arg2 appKey:(id)arg3;
- (void)loadGDTBannerSuccessed:(id)arg1 posId:(id)arg2 appKey:(id)arg3;
- (void)userStateChanged;
- (void)_onNotifyColorStyleChanged:(id)arg1;
- (void)notifyObserverHideCurrentBanner;
- (void)notifyObserverShowCurrentBanner;
- (void)reportClickAction:(id)arg1;
- (void)onClickFail:(int)arg1;
- (void)onClickSuccess:(id)arg1 targetUrl:(id)arg2;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)startLoad;
- (BOOL)shouldLoadBannerData;
- (void)showGreenDiamondAlert;
- (void)gdtBannerViewShouldClose:(id)arg1 clickInfo:(id)arg2 item:(id)arg3;
- (void)gdtBannerViewTapped:(id)arg1 clickInfo:(id)arg2 targetUrl:(id)arg3 item:(id)arg4;
- (id)bannersForView:(id)arg1;
- (void)prepareBannerView;
- (BOOL)exposureCurrentShowingItem;
- (BOOL)shouldReloadBannerAfterTimePassBy;
- (void)leaveCurrentPage;
- (void)entranceCurrentPage;
- (void)removeBannerObserver:(id)arg1;
- (void)addBannerObserver:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

