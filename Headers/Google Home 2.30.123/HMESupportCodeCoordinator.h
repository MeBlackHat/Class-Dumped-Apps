//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMESupportCodeCoordinatorDelegate;

@interface HMESupportCodeCoordinator : NSObject
{
    // Error parsing type: , name: authorization
    // Error parsing type: , name: analyticsLogger
    // Error parsing type: , name: groupID
    // Error parsing type: , name: navigationController
    // Error parsing type: , name: operationQueue
    // Error parsing type: , name: supportServiceBackendClient
    // Error parsing type: , name: logger
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
- (void)startInNavigationController:(id)arg1;
@property(nonatomic) __weak id <HMESupportCodeCoordinatorDelegate> delegate; // @synthesize delegate;

@end

