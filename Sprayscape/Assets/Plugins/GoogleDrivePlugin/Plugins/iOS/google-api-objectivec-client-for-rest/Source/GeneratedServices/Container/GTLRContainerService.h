// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Container Engine API (container/v1)
// Description:
//   Builds and manages clusters that run container-based applications, powered
//   by open source Kubernetes technology.
// Documentation:
//   https://cloud.google.com/container-engine/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scope

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeContainerCloudPlatform;

// ----------------------------------------------------------------------------
//   GTLRContainerService
//

/**
 *  Service for executing Google Container Engine API queries.
 *
 *  Builds and manages clusters that run container-based applications, powered
 *  by open source Kubernetes technology.
 */
@interface GTLRContainerService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRContainerQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
