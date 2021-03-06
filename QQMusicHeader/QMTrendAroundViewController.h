//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QAppKeyCheckDelegate.h"
#import "QMDiscoverSongsDetailScrollViewDataSource.h"
#import "QMDiscoverSongsDetailScrollViewDelegate.h"
#import "QMSongAnnotationViewDelegate.h"
#import "QMTrendAroundDataManagerDelegate.h"
#import "QMapViewDelegate.h"
#import "QReverseGeocoderDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CLLocationManager, HaveStreetView, NSArray, NSString, NSTimer, QAppKeyCheck, QMDiscoverSongDetailView, QMDiscoverSongsDetailScrollView, QMSongAnnotation, QMStreetViewViewController, QMTrendAroundDataManager, QMapView, UIAlertView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface QMTrendAroundViewController : SkinViewController <QAppKeyCheckDelegate, QMapViewDelegate, QReverseGeocoderDelegate, UIAlertViewDelegate, QMSongAnnotationViewDelegate, QMTrendAroundDataManagerDelegate, UIGestureRecognizerDelegate, QMDiscoverSongsDetailScrollViewDataSource, QMDiscoverSongsDetailScrollViewDelegate>
{
    BOOL _locationError;
    BOOL _isSpanTooLarge;
    BOOL _checkFirstEnter;
    BOOL _isUserToLocate;
    BOOL _addrBgViewAnimating;
    BOOL _streetBtnAnimating;
    BOOL _canFindSV;
    BOOL _didTouchToFindSV;
    CDStruct_2c43369c lastLeftBottomCoordinate;
    HaveStreetView *_isHaveStreetView;
    int oldLatDelta;
    int oldLngDelta;
    BOOL _spanChanged;
    BOOL _newAnnotations;
    int appKeyCheckRetryCnt;
    BOOL _checkedAppKeySuccess;
    int autoAddDelayCount;
    BOOL isNavBarFrostedGlass;
    BOOL __isNeedUploadMusicInfo;
    QMapView *_mapView;
    UIButton *_locateView;
    UIButton *_streetViewView;
    UIButton *_userMusicInfoView;
    UIImageView *_userMusicInfoOffView;
    UIImageView *_streetViewOnIcon;
    UIImageView *_streetViewOffIcon;
    QMStreetViewViewController *qmSvVC;
    UIView *_dimView;
    QMDiscoverSongDetailView *_detailView;
    QAppKeyCheck *_appKeyCheck;
    UILabel *_streetViewLabelView;
    UIImageView *_avatarView;
    UIImageView *_centerStreetViewView;
    UIView *_footBarView;
    UIButton *_addrBgView;
    UILabel *_addrDetailLableView;
    UILabel *_addrNameLableView;
    UILabel *_addrCheckingLableView;
    UIImageView *_addrStreetViewIcon;
    QMTrendAroundDataManager *_dataManager;
    NSTimer *_delayTimer;
    QMDiscoverSongsDetailScrollView *_detailScrollView;
    NSArray *_resortedAnnotations;
    UIView *_locationPointView;
    QMSongAnnotation *_locationPointAnnotation;
    UITapGestureRecognizer *_tapGest;
    UIImageView *_addrArrowImageView;
    CLLocationManager *_locationManager;
    UIAlertView *_userMusicInfoAlertView;
}

@property(retain, nonatomic) UIAlertView *userMusicInfoAlertView; // @synthesize userMusicInfoAlertView=_userMusicInfoAlertView;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) UIImageView *addrArrowImageView; // @synthesize addrArrowImageView=_addrArrowImageView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGest; // @synthesize tapGest=_tapGest;
@property(retain, nonatomic) QMSongAnnotation *locationPointAnnotation; // @synthesize locationPointAnnotation=_locationPointAnnotation;
@property(retain, nonatomic) UIView *locationPointView; // @synthesize locationPointView=_locationPointView;
@property(retain, nonatomic) NSArray *resortedAnnotations; // @synthesize resortedAnnotations=_resortedAnnotations;
@property(retain, nonatomic) QMDiscoverSongsDetailScrollView *detailScrollView; // @synthesize detailScrollView=_detailScrollView;
@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) QMTrendAroundDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIImageView *addrStreetViewIcon; // @synthesize addrStreetViewIcon=_addrStreetViewIcon;
@property(retain, nonatomic) UILabel *addrCheckingLableView; // @synthesize addrCheckingLableView=_addrCheckingLableView;
@property(retain, nonatomic) UILabel *addrNameLableView; // @synthesize addrNameLableView=_addrNameLableView;
@property(retain, nonatomic) UILabel *addrDetailLableView; // @synthesize addrDetailLableView=_addrDetailLableView;
@property(retain, nonatomic) UIButton *addrBgView; // @synthesize addrBgView=_addrBgView;
@property(retain, nonatomic) UIView *footBarView; // @synthesize footBarView=_footBarView;
@property(retain, nonatomic) UIImageView *centerStreetViewView; // @synthesize centerStreetViewView=_centerStreetViewView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *streetViewLabelView; // @synthesize streetViewLabelView=_streetViewLabelView;
@property(retain, nonatomic) QAppKeyCheck *appKeyCheck; // @synthesize appKeyCheck=_appKeyCheck;
@property(nonatomic) BOOL _isNeedUploadMusicInfo; // @synthesize _isNeedUploadMusicInfo=__isNeedUploadMusicInfo;
@property(retain, nonatomic) QMDiscoverSongDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) QMStreetViewViewController *qmSvVC; // @synthesize qmSvVC;
@property(retain, nonatomic) HaveStreetView *isHaveStreetView; // @synthesize isHaveStreetView=_isHaveStreetView;
@property(retain, nonatomic) UIImageView *streetViewOffIcon; // @synthesize streetViewOffIcon=_streetViewOffIcon;
@property(retain, nonatomic) UIImageView *streetViewOnIcon; // @synthesize streetViewOnIcon=_streetViewOnIcon;
@property(retain, nonatomic) UIImageView *userMusicInfoOffView; // @synthesize userMusicInfoOffView=_userMusicInfoOffView;
@property(retain, nonatomic) UIButton *userMusicInfoView; // @synthesize userMusicInfoView=_userMusicInfoView;
@property(retain, nonatomic) UIButton *streetViewView; // @synthesize streetViewView=_streetViewView;
@property(retain, nonatomic) UIButton *locateView; // @synthesize locateView=_locateView;
@property(retain, nonatomic) QMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)showFrostedGlassTroundAround;
- (void)hideFrostedGlassTroundAround;
- (void)onClickPlay;
- (void)pageScrollView:(id)arg1 didScrollToPage:(id)arg2 atIndex:(int)arg3;
- (void)pageScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (int)numberOfViewsInScrollView:(id)arg1;
- (id)detailScrollView:(id)arg1 viewForPageAtIndex:(int)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hostCallbackWithQuerySettingProtocol:(BOOL)arg1;
- (void)hostCallbackWithQueryProtocol:(id)arg1;
- (void)hostCallbackWithUploadProtocol;
- (void)onNotifySongsChangedLoveState:(id)arg1;
- (int)vcType;
- (void)didSelectAnnotationView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)gcdForDelayFindStreetView;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)reverseGeocoder:(id)arg1 didFailWithError:(unsigned int)arg2;
- (void)reverseGeocoder:(id)arg1 didFindPlacemark:(id)arg2;
- (void)notifyAppKeyCheckResult:(unsigned int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)getUserLocationView;
- (int)indexOfAnnotation:(id)arg1;
- (id)resortAnnotations:(id)arg1;
- (void)setAddrViewLables;
- (void)hideAddrView;
- (void)showAddrView;
- (void)animationForHideCenterStreetViewIcon;
- (void)animationForShowCenterStreetViewIcon;
- (void)setStreetViewUsable:(BOOL)arg1;
- (void)setStreetViewDisable;
- (BOOL)isCoordinateInScreen:(CDStruct_c3b9c2ee)arg1;
- (BOOL)isOldAnnotationInScreen:(id)arg1;
- (BOOL)checkMapviewMovedSpanForQueryMusicInfo;
- (BOOL)checkMapviewSpan;
- (void)updateIsMyFavorite:(id)arg1;
- (void)syncMusicInfoSetting;
- (void)queryMusicInfoSetting;
- (void)queryMusicInfo;
- (void)uploadMusicInfo;
- (void)updateUserView:(BOOL)arg1;
- (CDStruct_c3b9c2ee)getLastestLocation;
- (void)saveLastestLocation:(id)arg1;
- (void)sosoSDKAppKeyCheck;
- (void)resetAddrViewLable;
- (void)toFindStreetViewWithCurrentCenter;
- (void)toFindStreetViewWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)showAlertViewForNoStreetView;
- (void)showAlertViewForUserMusicInfo;
- (void)showAlertViewForOpenLocationService;
- (void)handleAnnotations:(id)arg1;
- (void)handleFirstEnter;
- (void)switchUserInfoViewBg;
- (void)enterStreetView;
- (void)userMusicInfoViewEvent;
- (void)streetViewViewEvent;
- (void)locateViewEvent;
- (void)dismissDetailScrollView;
- (void)showDetailScrollView:(int)arg1;
- (void)statusBarFrameDidChange:(id)arg1;
- (BOOL)showDelBtnInActionSheet:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)back:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)popGestureRecognize;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

