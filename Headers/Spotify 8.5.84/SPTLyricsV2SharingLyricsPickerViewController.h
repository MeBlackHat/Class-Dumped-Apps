//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLyricsV2LyricsViewControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTLyricsV2Configuration, SPTLyricsV2GLUETheme, SPTLyricsV2LyricsViewController, SPTLyricsV2Model, SPTLyricsV2SharingLyricsPickerView, SPTPlayerTrack, SPTVocalRemovalConfiguration, UIScrollView;
@protocol SPTPageContainer;

@interface SPTLyricsV2SharingLyricsPickerViewController : UIViewController <SPTLyricsV2LyricsViewControllerDelegate, SPTNavigationControllerNavigationBarState, SPTPageController>
{
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTLyricsV2GLUETheme *_theme;
    SPTLyricsV2Model *_lyricsModel;
    CDUnknownBlockType _continueCallback;
    CDUnknownBlockType _cancelCallback;
    SPTPlayerTrack *_track;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
    UIScrollView *_scrollView;
    SPTLyricsV2LyricsViewController *_lyricsViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTLyricsV2LyricsViewController *lyricsViewController; // @synthesize lyricsViewController=_lyricsViewController;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(readonly, nonatomic) CDUnknownBlockType continueCallback; // @synthesize continueCallback=_continueCallback;
@property(readonly, nonatomic) SPTLyricsV2Model *lyricsModel; // @synthesize lyricsModel=_lyricsModel;
@property(readonly, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
- (void)updateCharacterCount:(long long)arg1;
- (void)didTapContinueButton;
- (void)didTapBackButton;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)lyricsViewController:(id)arg1 didSelectLinesForSharing:(long long)arg2;
- (void)lyricsViewControllerDidTapSyncTheseLyricsLink:(id)arg1;
- (void)lyricsViewController:(id)arg1 didShowNumberOfCharacters:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithModel:(id)arg1 track:(id)arg2 lyricsConfiguration:(id)arg3 theme:(id)arg4 vocalRemovalConfiguration:(id)arg5 continueCallback:(CDUnknownBlockType)arg6 cancelCallback:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SPTLyricsV2SharingLyricsPickerView *view; // @dynamic view;

@end

