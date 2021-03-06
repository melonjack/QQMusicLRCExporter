//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate.h"
#import "ProtocolHostDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, UIImage, UIImageView, UILabel, UIViewController, WVJBResponseCallbackObject;

__attribute__((visibility("hidden")))
@interface WebShareVC : SkinViewController <UITableViewDataSource, UITableViewDelegate, ProtocolHostDelegate, UIWebViewDelegate, ImageManagerDelegate>
{
    NSString *_strTitle;
    NSString *_strDesc;
    NSString *_strLink;
    UIImage *_shareImage;
    NSString *_strImageUrl;
    UIViewController *_vcFrom;
    WVJBResponseCallbackObject *_responseCallbackObject;
    UILabel *_labelTitle;
    UILabel *_labelDesc;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *labelDesc; // @synthesize labelDesc=_labelDesc;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) WVJBResponseCallbackObject *responseCallbackObject; // @synthesize responseCallbackObject=_responseCallbackObject;
@property(retain, nonatomic) UIViewController *vcFrom; // @synthesize vcFrom=_vcFrom;
@property(retain, nonatomic) NSString *strImageUrl; // @synthesize strImageUrl=_strImageUrl;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(retain, nonatomic) NSString *strLink; // @synthesize strLink=_strLink;
@property(retain, nonatomic) NSString *strDesc; // @synthesize strDesc=_strDesc;
@property(retain, nonatomic) NSString *strTitle; // @synthesize strTitle=_strTitle;
- (void).cxx_destruct;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (id)getShareImageByUrl:(id)arg1;
- (void)sendMsgToWXReq:(id)arg1 text:(id)arg2 isSendTosession:(BOOL)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dismiss:(id)arg1;
- (void)onLoginSuccessForReqestSong:(id)arg1;
- (void)onLoginSuccessForShareSong:(id)arg1;
- (id)thumbImage:(id)arg1;
- (void)onLoginSuccessForShare;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sharePicImage;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)headerCancel:(id)arg1;
- (void)doHandlePushComming:(id)arg1;
- (float)getSeperateLineWidth;
- (void)updateSongInfoToUI;
- (id)createTableHeaderView;
- (void)popGestureRecognize;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidPop;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

