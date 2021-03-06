//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TWTRSETweet;
@protocol TWTRSEAccount, TWTRSEAutoCompletion, TWTRSECardPreviewProvider, TWTRSEGeoTagging, TWTRSEImageDownloader, TWTRSENetworking, TWTRSETweetShareViewControllerDelegate;

@interface TWTRSETweetShareConfiguration : NSObject
{
    NSArray *_accounts;
    id <TWTRSEAccount> _initiallySelectedAccount;
    TWTRSETweet *_initialTweet;
    id <TWTRSEGeoTagging> _geoTagging;
    id <TWTRSEAutoCompletion> _autoCompletion;
    id <TWTRSECardPreviewProvider> _cardPreviewProvider;
    id <TWTRSEImageDownloader> _imageDownloader;
    id <TWTRSENetworking> _networking;
    Class _wordRangeCalculator;
    id <TWTRSETweetShareViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <TWTRSETweetShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Class wordRangeCalculator; // @synthesize wordRangeCalculator=_wordRangeCalculator;
@property(readonly, nonatomic) id <TWTRSENetworking> networking; // @synthesize networking=_networking;
@property(readonly, nonatomic) id <TWTRSEImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) id <TWTRSECardPreviewProvider> cardPreviewProvider; // @synthesize cardPreviewProvider=_cardPreviewProvider;
@property(readonly, nonatomic) id <TWTRSEAutoCompletion> autoCompletion; // @synthesize autoCompletion=_autoCompletion;
@property(readonly, nonatomic) id <TWTRSEGeoTagging> geoTagging; // @synthesize geoTagging=_geoTagging;
@property(readonly, copy, nonatomic) TWTRSETweet *initialTweet; // @synthesize initialTweet=_initialTweet;
@property(readonly, nonatomic) id <TWTRSEAccount> initiallySelectedAccount; // @synthesize initiallySelectedAccount=_initiallySelectedAccount;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (id)initWithInitialTweet:(id)arg1 accounts:(id)arg2 initiallySelectedAccount:(id)arg3 geoTagging:(id)arg4 autoCompletion:(id)arg5 cardPreviewProvider:(id)arg6 imageDownloader:(id)arg7 localizedResources:(Class)arg8 networking:(id)arg9 twitterText:(Class)arg10 wordRangeCalculator:(Class)arg11 delegate:(id)arg12;

@end

