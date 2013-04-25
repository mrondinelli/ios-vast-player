//
//  DVInlineVideoAd.h
//  DVVASTSample
//
//  Created by Nikolay Morev on 8/7/12.
//  Copyright (c) 2012 DENIVIP Media. All rights reserved.
//

#import "DVVideoAd.h"


@interface DVInlineVideoAd : DVVideoAd

@property (nonatomic, copy) NSString *system;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *impressionURL;       // VAST 1 — Only one <Impression> element — here for backward compatibility
@property (nonatomic, copy) NSArray *impressionURLs;    // VAST 2 — Multiple <Impression> elements
@property (nonatomic, copy) NSURL *clickThroughURL;
@property (nonatomic, copy) NSURL *clickTrackingURL;

@property (nonatomic) NSTimeInterval duration;
@property (nonatomic, copy) NSURL *mediaFileURL;

- (void)trackImpressions;

@end
