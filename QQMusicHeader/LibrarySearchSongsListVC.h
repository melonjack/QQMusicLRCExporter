//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchResultBaseVC.h"

#import "ImageManagerDelegate.h"

@class NSString, SkinViewController, UINavigationController;

__attribute__((visibility("hidden")))
@interface LibrarySearchSongsListVC : SearchResultBaseVC <ImageManagerDelegate>
{
    UINavigationController *toggleNavViewController;
    SkinViewController *viewController;
    struct CGRect viewFrame;
}

@property(retain, nonatomic) SkinViewController *viewController; // @synthesize viewController;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame;
@property(retain, nonatomic) UINavigationController *toggleNavViewController; // @synthesize toggleNavViewController;
- (void).cxx_destruct;
- (void)onDirect:(id)arg1;
- (void)resizeHeadViewHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createDirectButton;
- (void)reFreshSuccess;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (BOOL)showDelBtnInActionSheet:(id)arg1;
- (void)updateBtnClicked:(id)arg1;
- (id)getAllVCType;
- (id)strVCtype;
- (void)showNetErrWithResult:(int)arg1;
- (void)showNothingView;
- (void)showNoNetView;
- (void)showLoadingView;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

