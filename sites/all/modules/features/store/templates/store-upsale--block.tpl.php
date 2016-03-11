<div class="columns large-12 upsale">
  <?php if (!empty($add_to_cart_form)): ?>
  <p>Added <?php echo $saving; ?> to upgrade to our <?php echo $plan; ?> plan.</p>
  <?php echo render($add_to_cart_form); ?>
  <?php else: ?>

  <?php endif; ?>
</div>