//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaPickerBaseViewController.h"

@class WAMediaPickerLibraryController;

@interface WAMediaPickerLibraryViewController : WAMediaPickerBaseViewController
{
    _Bool _preparingToPresentAlbum;
    _Bool _libraryAvailable;
    WAMediaPickerLibraryController *_libraryController;
}

+ (id)controller;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaPickerLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)presentNewAlbumViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

