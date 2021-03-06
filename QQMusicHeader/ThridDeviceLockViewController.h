//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CircleLabel, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface ThridDeviceLockViewController : UIViewController
{
    UILabel *statusLabel;
    UIActivityIndicatorView *activityIndicator;
    UIImageView *logoView_BMW;
    UIImageView *logoView_MINI;
    UIImageView *logoView_FORD;
    UIImageView *albumView;
    UILabel *songNameLabel;
    CircleLabel *albumInfoLabel;
    BOOL didSubscribeToNotifications;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
@property(retain, nonatomic) UIImageView *logoView_FORD; // @synthesize logoView_FORD;
@property(retain, nonatomic) UIImageView *logoView_MINI; // @synthesize logoView_MINI;
@property(retain, nonatomic) UIImageView *logoView_BMW; // @synthesize logoView_BMW;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel;
@property(nonatomic) BOOL didSubscribeToNotifications; // @synthesize didSubscribeToNotifications;
- (void).cxx_destruct;
- (void)unsubscribeFromNotifications;
- (void)subscribeForNotifications;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateAlbumImageView:(id)arg1;
- (void)updatePlayStateChange:(int)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)updateMusicInfo:(id)arg1;
- (void)loadView;
- (void)alert:(id)arg1;
- (void)connectionDidChanged;

@end

