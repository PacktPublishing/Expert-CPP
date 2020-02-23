class User
{
public:
  // code omitted for brevity
  using PaymentOptionList = std::vector<PaymentOption>;
  PaymentOption get_primary_payment_option() const {
    return primary_payment_option_;
  }

  PaymentOptionList get_payment_options() const {
    return payment_options_;
  }

  void add_payment_option(const PaymentOption& po, bool is_primary) {
    if (is_primary) {
      // moving current primary option to non-primaries
      add_payment_option(primary_payment_option_, false);
      primary_payment_option_ = po;
      return;
    }
    payment_options_.push_back(po);
  }

private:
  // code omitted for brevity
  PaymentOption primary_payment_option_;
  PaymentOptionList payment_options_;
};