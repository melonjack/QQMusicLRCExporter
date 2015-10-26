//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface ExplorerViewController : SkinViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate>
{
    int _actionSheetDelete;
    int _actionSheetEmail;
    int _actionSheetShowProperty;
    NSString *basePath;
    UITableView *_tableView;
    NSArray *_folderItems;
}

@property(retain) NSArray *folderItems; // @synthesize folderItems=_folderItems;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSString *basePath; // @synthesize basePath;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)actionSheet:(id)arg1 actionSheetButtonClickedAtIndex:(int)arg2;
- (void)_newActionSheet:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)getLastAccessTimeDesc:(id)arg1;
- (void)getAllFolderItems;
- (void)dealloc;
- (void)loadView;
- (id)initWithBasePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
